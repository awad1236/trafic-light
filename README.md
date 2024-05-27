# trafic-light
<p></p>
<h2>what is this project</h2>
<p>This project is a traffic light with sensors to open the crowded road.</p>
<h2>componants</h2>
<ul>
  <li>
    Arduino nano
  </li>
  <li>
    4 digits 7 segments
  </li>
  <li>
    6 colored leds
  </li>
  <li>
    buttons
    </li>
  
</ul>
<h2>how does it work</h2>
<p>Under normal conditions, when no buttons are pressed, the 7-segment display shows a countdown from 30 to 0. Once the counter reaches 0, it resets to 30 and the states of both roads are reversed (i.e., if a road was closed, it is opened, and if it was open, it is closed). If either button is pressed at any time, the corresponding road is opened if it was previously closed. The counter continues to operate regardless of the button presses, ensuring uninterrupted countdown and road state management. </p>
