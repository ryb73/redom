type t;

include AbstractElement.Impl({
    type nonrec t = t;
    let tagName = "INPUT";
});

[@bs.get] external value : Element.t(t) => string = "";