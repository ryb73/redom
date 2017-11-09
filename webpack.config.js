const path              = require("path");

function rel(relPath) {
    return path.resolve(__dirname, relPath)
}

module.exports = {
    entry: {
        index: rel("lib/es6/test/index"),
    },

    output: {
        path: rel("lib/es6/test"),
        filename: "[name]-out.js",
    },

    module: {
        rules: [{
            test: /\.js$/,
            use: "babel-loader",
        }]
    },
};
