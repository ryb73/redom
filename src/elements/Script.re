open Types;

include AbstractElement.Impl({
    type t = script;
    let tagName = "SCRIPT";
});

[@bs.get] external src : t => string = "";
[@bs.set] external setSrc : t => string => unit = "src";
let setSrc = (loc, elem) => {
    setSrc(elem, loc);
    elem;
};
