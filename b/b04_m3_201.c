section "b04_m3_201"{
    int var0 = Date_GetDateOption(2, 15);
    if ((Date_Date_Nanpa() == 1) && (Parameter_GetCh1Param(3, 130) >= 4)){
        System_Call_GS2("B11", "M3", 0);
        Character_Chara_GS2(3, "M3_09F", 0, 1);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_530_000", 127, 40);
        }
    else {
        Character_Chara_GS2(3, "M3_09F", 0);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_530_000", 127, 40);
        System_Call_GS2("B02", "M3", 10);
        }
    if (var0 == 0){
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0403201_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The ocean and the shore is just full\nof people.\nThe phrase \"jostling against each\nother\" certainly means something\nlike this.");
        Message_MsgSel("For the time being, let's swim!", "I want to go to the beach hut.", "Let's nap under the parasol.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_BlinkStart(3, 0, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0403201_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Even if you are hurried, the beach\nis not going anywhere.\nBesides, I do not want to go in with\nthat kind of crowd.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_09F", 0, 1, 1, 34);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403201_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nThe smell of yakisoba is drifting\nall the way here.\nIt is a bit early, but shall we eat?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403201_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right.\nIt is not bad to sleep while\nlistening to the sounds of the\nwaves.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("B0403201_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I will mind our things under the\nparasol.\nYou should go swim.");
        Message_MsgSel("Eh, you're not swimming?", "You didn't put it in the lockers?", "I want to build a sand castle instead.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("B0403201_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I am f-fine, so do not let my good\nwill go to waste.\nSo go, just go!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_09F", 0, 1, 1, 34);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403201_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, I could not put my valuables in\nthere, so we need someone to watch\nour things.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403201_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see.\nThen you can do that near the\nparasol....\nAlright, I will join in, too.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0403201_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nDid you say that you want me in the\nocean, no matter what?");
        Message_MsgSel("Yeah, let's swim together!", "I want to play beach volleyball!", "Can't you swim, ｛Hikami＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_BlinkStart(3, 3, (#1), 1);
            Voice_PlayVoice("B0403201_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You are also stubborn.\nI have said it many times, I do not\nwant to swim.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403201_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... In the shallows? Ah, that kind.\nAlright, only where the water is\nbelow my knees, okay?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403201_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "W...\nWhen did I say that I could not\nswim?\nI just hate the congestion!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403201_C01200", 3, "B0403201_C01201");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\n｛主人公｝, your voice is\ntoo loud.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0403201_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I am going to stop evading it\nnow....\nYes, I cannot swim!");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0403201_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I couldn't get perfect attendance in\njunior school because of swimming\nclasses.\nI would fake being sick on those\ndays.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh, you did,\n｛Hikami＊＊｝!?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403201_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I was glad that my middle school had\nno pool.\nAh, I was happy, thinking that I did\nnot have to swim anymore...");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403201_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... It is a big secret, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "O-Okay!");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403201_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nI have my reasons, so do not worry\nabout me, even if I do not go into\nthe ocean.\nIs that alright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "O-Okay...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I found out a hidden side to\n｛Hikami＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
