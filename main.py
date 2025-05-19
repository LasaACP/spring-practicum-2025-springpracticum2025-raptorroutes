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
        print(request.form['schedule'])
    return render_template('test.html')
@app.route('/display')
def display():
    out = run()
    return render_template('hello.html', strng = out)

def run():
    inp = "This is a map of LASA, processed through C++"
    s=subprocess.run(["./a.exe",inp],stdout=PIPE)
    print(s)
    return s.stdout.decode("utf-8")

if __name__ == '__main__':
    app.run(debug=True)