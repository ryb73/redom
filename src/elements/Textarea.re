open ReDomTypes;

include AbstractElement.Impl({
    type t = textarea;
    let tagName = "TEXTAREA";
});

[@bs.get] external value : t => string = "";
