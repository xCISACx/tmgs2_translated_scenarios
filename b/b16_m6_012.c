section "b16_m6_012"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 10);
    Voice_PlayVoice("XB_06_00_F00600", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Are you by chance, fascinated by me?");
    Message_MsgSel("Yeah, that's right.", "No, it's not that.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 6);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_06_00_F00700", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I-I see.... I'm just happy.\nIs that wrong?");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XB_06_00_F00800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... But what was that little moment?\nIt's okay.\nYou've explained it was something\ndifferent.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
