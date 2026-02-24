section "b16_m4_042"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 10);
    Contact_SChFace(0, 4, 1);
    Voice_PlayVoice("XB_04_00_D02400", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "This is nice. Going home together...");
    Message_MsgSel("Yeah.", "Nope.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 9);
        Voice_PlayVoice("XB_04_00_D02500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...\nYou know there's no meaning in it if\nit's not with you, right?");
        break ;
        case 1:
        Contact_SChFace(0, 2, 0);
        Contact_SChFace(0, 3, 3);
        Voice_PlayVoice("XB_04_00_D02600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Is it because we'll get closer\nbecause of the time spent apart?\n... That's deep.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
