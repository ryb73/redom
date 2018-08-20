type t;

[@bs.get] external search : t => string = "";

[@bs.get] external href : t => string = "";
[@bs.set] external setHref : (t, string) => unit = "href";

[@bs.get] external hash : t => string = "";
