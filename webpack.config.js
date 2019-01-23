const path              = require("path");

function rel(relPath) {
    return path.resolve(__dirname, relPath)
}

module.exports = {
    mode: "development",

    entry: {
        index: rel("lib/js/test/index"),
    },

    output: {
        path: rel("lib/js/test"),
        filename: "[name]-out.js",
    },

    module: {
        rules: [{
            test: /\.js$/,
            use: "babel-loader",
        }]
    },
};
