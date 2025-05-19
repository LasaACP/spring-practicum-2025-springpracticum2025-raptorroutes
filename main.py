from flask import Flask 
from flask import request 
from flask import render_template

import subprocess
from subprocess import PIPE

app = Flask(__name__)

@app.route("/", methods = ['GET', 'POST'])
def home():
    return render_template("schedule.html")

@app.route("/test", methods = ['GET', 'POST'])
def test():
    if (request.method == 'POST'):
        tchrs = request.form['schedule']
        print(tchrs)
        tchrsName = tchrs.split(",")
        ans = run(tchrsName[0], tchrsName[1])
        return render_template('test.html', ans = ans)


    return render_template('test.html')
@app.route('/display')
def display():
    out = run()
    return render_template('hello.html', strng = out)

def run(inp1, inp2):
    s=subprocess.run(["./a.exe",inp1, inp2],stdout=PIPE)
    a = (s.stdout).decode('utf-8').lstrip()
    ans = (a.split(" "))
    return ans

if __name__ == '__main__':
    app.run(debug=True)