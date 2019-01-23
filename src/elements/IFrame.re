open ReDomTypes;

include AbstractElement.Impl({
    type t = iframe;
    let tagName = "IFRAME";
});

[@bs.get] external contentWindow : t => window = "";
