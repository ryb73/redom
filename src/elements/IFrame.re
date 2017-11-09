open SharedTypes;

type t;

include AbstractElement.Impl {
    type nonrec t = t;
    let tagName = "IFRAME";
};

external contentWindow : Element.t t => window = "" [@@bs.get];