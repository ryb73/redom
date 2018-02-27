open ReDomSharedTypes;

type t;

include AbstractElement.Impl({
    type nonrec t = t;
    let tagName = "IFRAME";
});

[@bs.get] external contentWindow : Element.t(t) => window = "";
