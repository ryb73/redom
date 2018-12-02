type t;

[@bs.val] external location: t = "";
let wrap = (f) => (~location=location) => f(location);
let wrapU = (f) => (~location=location, ()) => f(location);

[@bs.get] external search: t => string = "";

[@bs.get] external href: t => string = "";
[@bs.set] external setHref: (t, string) => unit = "href";

[@bs.get] external hash: t => string = "";

let search = wrapU(search);
let href = wrapU(href);
let setHref = wrap(setHref);
let hash = wrapU(hash);
