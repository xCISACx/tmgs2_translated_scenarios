section "b16_m6_015"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 9);
    Voice_PlayVoice("XC_06_00_F00800", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "I must keep an eye on Senpai.\nWill you let me take on the\nresponsibility?");
    Message_MsgSel("Yeah, sounds good.", "No!");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 0);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_06_00_F00900", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I won't forget those words.\nI absolutely will not.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_06_00_F01000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "That's not good....\nLoosen up, Senpai?");
        break ;
        }
    Music_StopBGM(0, 40);
    }
