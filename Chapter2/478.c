if state = clr1
    if(hcount > 349 and hcount < 649 and vcount > 100 and vcount < 321) then 
        red_data <= (others => '1');
        green_data <= (others => '0');
        blue_data <= (others => '0');
    end if;
if state = clr2
    if(hcount > 349 and hcount < 649 and vcount > 542 and vcount < 763) then 
        red_data <= (others => '0');
        green_data <= (others => '1');
        blue_data <= (others => '0');
    end if;
if state = clr3
    if(hcount > 349 and hcount < 649 and vcount > 984 and vcount < 1205) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '1');
    end if;
if state = clr4
    if(hcount > 349 and hcount < 649 and vcount > 1426 and vcount < 1647) then 
        red_data <= (others => '1');
        green_data <= (others => '0');
        blue_data <= (others => '1');
    end if;
if state = clear
    if(hcount > 0 and hcount < 1747 and vcount > 0 and vcount < 749) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
    end if;



//drawing letter Y
if(vcount > 335 and vcount < 360 and hcount > 308 and hcount < 321) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 295 and vcount < 335 and hcount > 321 and hcount < 334) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 335 and vcount < 360 and hcount > 334 and hcount < 347) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 295 and vcount < 425 and hcount > 362 and hcount < 372) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
//letter O
elsif(vcount > 295 and vcount < 425 and hcount > 362 and hcount < 372) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 295 and vcount < 305 and hcount > 362 and hcount < 404) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 415 and vcount < 425 and hcount > 362 and hcount < 404) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 295 and vcount < 425 and hcount > 394 and hcount < 404) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');

//letter U
elsif(vcount > 295 and vcount < 425 and hcount > 419 and hcount < 432) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 295 and vcount < 308 and hcount > 432 and hcount < 458) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 295 and vcount < 425 and hcount > 445 and hcount < 458) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');

//letter L
elsif(vcount > 295 and vcount < 425 and hcount > 493 and hcount < 506) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 295 and vcount < 310 and hcount > 493 and hcount < 536) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');

//letter O
elsif(vcount > 295 and vcount < 425 and hcount > 549 and hcount < 562) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 295 and vcount < 308 and hcount > 549 and hcount < 591) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 415 and vcount < 425 and hcount > 549 and hcount < 591) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 295 and vcount < 425 and hcount > 581 and hcount < 591) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
//letter S
elsif(vcount > 295 and vcount < 308 and hcount > 604 and hcount < 646) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 295 and vcount < 321 and hcount > 633 and hcount < 646) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 308 and vcount < 321 and hcount > 604 and hcount < 646) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 386 and vcount < 425 and hcount > 604 and hcount < 617) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 412 and vcount < 425 and hcount > 604 and hcount < 646) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
//letter E
elsif(vcount > 295 and vcount < 308 and hcount > 661 and hcount < 691) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 295 and vcount < 425 and hcount > 661 and hcount < 674) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 321 and vcount < 334 and hcount > 661 and hcount < 691) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif(vcount > 321 and vcount < 334 and hcount > 661 and hcount < 691) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');