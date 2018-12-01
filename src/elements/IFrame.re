open Types;

type t;

include AbstractElement.Impl({
    type nonrec t = t;
    let tagName = "IFRAME";
});

[@bs.get] external contentWindow : element(t) => window = "";
