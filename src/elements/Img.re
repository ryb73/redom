type t;

include AbstractElement.Impl({
    type nonrec t = t;
    let tagName = "IMG";
});

[@bs.get] external src : Element.t(t) => string = "";
[@bs.set] external setSrc : Element.t(t) => string => unit = "src";

let blank = {
    let img = create();
    setSrc(img, "data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==");
    img;
};
