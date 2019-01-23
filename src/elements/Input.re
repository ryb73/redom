open ReDomTypes;

include AbstractElement.Impl({
    type t = input;
    let tagName = "INPUT";
});

[@bs.get] external value : t => string = "";
