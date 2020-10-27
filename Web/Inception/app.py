#/usr/bin/python3

from flask import Flask, render_template, make_response

app = Flask(__name__, static_folder='static', static_url_path='')

@app.route("/")
def home():
	return render_template('index.html')

if __name__ == '__main__':
	app.run(host='0.0.0.0', port=3000, debug=True)
