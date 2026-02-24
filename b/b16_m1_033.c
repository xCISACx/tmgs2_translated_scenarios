section "b16_m1_033"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 11);
    Contact_SChFace(0, 4, 1);
    Voice_PlayVoice("XC_01_00_A02400", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Alright...\nIt seems like no one is watching us.");
    Message_MsgSel("Yeah!", "... Eh?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 0);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_01_00_A02500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah.\nYou can come a little closer to me.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 6);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_01_00_A02600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You're kidding, right?\nShould I keep a little more distance\nbetween us?");
        break ;
        }
    Music_StopBGM(0, 40);
    }
