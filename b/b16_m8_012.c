section "b16_m8_012"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(1, 0, 5);
    Contact_SChFace(1, 0, (#1));
    Contact_SChFace(1, 4, 0);
    Contact_SChFace(1, 4, 0);
    Voice_PlayVoice("XB_08_00_H00500", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "...\nI know you're looking at the mirror.\nLook at the front, the front.");
    Message_MsgSel("Okay.", "Eh～.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(1, 0, 2);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XB_08_00_H00600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Ah.\nI don't mean that I hate being\nwatched.\nHey, you listening?");
        break ;
        case 1:
        Contact_SChFace(1, 0, 2);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 1);
        Contact_SChFace(1, 4, 1);
        Voice_PlayVoice("XB_08_00_H00700", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I'm distracted by many things.\nWell, it's fine.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
