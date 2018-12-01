open Types;

module type T = {
    type t;
    let tagName: string;
};

module Impl = (T: T) => {
    type _t = element(T.t);

    external _unsafeCast : 'a => _t = "%identity";
    let cast = (element) =>
        if (Element.tagName(element) === T.tagName) {
            Some(_unsafeCast(element))
        } else {
            None
        };

    let create = () =>
        Document.createElement(T.tagName)
        |> _unsafeCast;
};
