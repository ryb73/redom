open ReDomTypes;

module type T = {
    type t;
    let tagName: string;
};

module Impl = (T: T) => {
    type t = element(T.t);

    external unsafeCast : 'a => t = "%identity";
    let cast = (element) =>
        if (Element.tagName(element) === T.tagName) {
            Some(unsafeCast(element))
        } else {
            None
        };

    let create = () =>
        Document.createElement(T.tagName)
        |> unsafeCast;
};
