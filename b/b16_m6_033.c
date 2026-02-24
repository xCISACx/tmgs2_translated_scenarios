section "b16_m6_033"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XC_06_00_F02400", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Do you want to walk a little more\nslowly?");
    Message_MsgSel("Yeah, sounds good.", "No!");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 9);
        Voice_PlayVoice("XC_06_00_F02500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "A night like this is nice unless\ndawn breaks.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XC_06_00_F02600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "You don't have to be so shy....\nYou're cute, Senpai.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
