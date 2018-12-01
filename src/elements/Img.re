open Types;

include AbstractElement.Impl({
    type nonrec t = img;
    let tagName = "IMG";
});

[@bs.get] external src : t => string = "";
[@bs.set] external setSrc : t => string => unit = "src";

let blank = {
    let img = create();
    setSrc(img, "data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==");
    img;
};
