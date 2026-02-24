section "b16_m2_031"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 10);
    Voice_PlayVoice("XB_02_00_B01500", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "You look like a small animal.");
    Message_MsgSel("Yeah, maybe.", "I don't think so.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 0);
        Voice_PlayVoice("XB_02_00_B01600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Like a hamster or a rabbit.\nYou have a fluffy image.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XB_02_00_B01700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Maybe I should stop.\nBut I can't help it since you're\ncute.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
