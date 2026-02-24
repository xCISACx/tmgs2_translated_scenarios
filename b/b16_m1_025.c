section "b16_m1_025"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 11);
    Voice_PlayVoice("XC_01_00_A01900", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Hey, if I was embarrassed by this,\nwould you stop?");
    Message_MsgSel("Sorry...", "No!");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 11);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_01_00_A02000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I see...\nYou don't have to stop, though.\nIt's not like it's not embarrassing.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 8);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_01_00_A02100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's really embarrassing.\nYou made me say it.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
