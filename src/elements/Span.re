type t;

include AbstractElement.Impl({
    type nonrec t = t;
    let tagName = "SPAN";
});
