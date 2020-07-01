open Revery;
open Revery.UI;
open Revery.UI.Components;

let make = (~start, ()) => {
  <FadeIn>
    <Center>
      <Clickable onClick=start>
        <Text text="Start" fontSize=80. style=Style.[color(Theme.blue)] />
      </Clickable>
    </Center>
  </FadeIn>
};
