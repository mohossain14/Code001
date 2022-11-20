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
if(hcount > 349 and hcount < 649 and vcount > 100 and vcount < 321) then 
        red_data <= (others => '0');
        green_data <= (others => '0');
        blue_data <= (others => '0');
elsif()