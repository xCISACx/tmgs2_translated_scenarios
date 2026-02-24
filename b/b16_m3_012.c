section "b16_m3_012"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 2, 3);
    Contact_SChFace(0, 3, 2);
    Voice_PlayVoice("XB_03_00_C00700", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "...?\nAh, so is this what repeatedly\npoking someone's turned cheek is?");
    Message_MsgSel("Yeah, that's right.", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Contact_SBlinkStart(0, 3, (#1));
        Voice_PlayVoice("XB_03_00_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I was often teased by the girls in\nelementary school.\nHaha, how nostalgic.");
        break ;
        case 1:
        Contact_SChFace(0, 2, 11);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_03_00_C00900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Then what exactly was that just\nnow...?\nDid you just want to touch my face\nor something?");
        break ;
        }
    Music_StopBGM(0, 40);
    }
