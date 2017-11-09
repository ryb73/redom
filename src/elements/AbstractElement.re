module type T = {
    type t;
    let tagName : string;
};

module Impl = fun (T : T) => {
    type _t = T.t;

    external _unsafeCast : 'a => Element.t _t = "%identity";
    let cast (element : Element.t 'a) : option (Element.t _t) => {
        if(Element.tagName element === T.tagName) {
            Some (_unsafeCast element);
        } else {
            None;
        };
    };
};