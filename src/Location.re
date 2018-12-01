type t;

[@bs.val] external location : t = "";
let _wrap = (f) =>
    (~location=location) => f(location);
let _wrapU = (f) =>
    (~location=location, ()) => f(location);

[@bs.get] external search : t => string = "";

[@bs.get] external href : t => string = "";
[@bs.set] external setHref : (t, string) => unit = "href";

[@bs.get] external hash : t => string = "";

let search = _wrapU(search);
let href = _wrapU(href);
let setHref = _wrapU(setHref);
let hash = _wrapU(hash);
