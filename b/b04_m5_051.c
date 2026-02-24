section "b04_m5_051"{
    int var0 = Date_GetDateOption(2, 13);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_D?F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405051_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wow～... This is an amazing place.");
        Message_MsgSel("It's like a paradise floating in the sky!", "It's a giant, 360 degree panorama!", "It's not actually in the sky!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405051_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nThen～, you would be Adam and I would\nbe Eve?\nAmazing～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405051_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, it's really awesome!\nHey, let's walk around again.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405051_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nWas there something that you didn't\nlike?\nTell me, if you want to, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_D?F", 0, 1, 0);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405051_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It doesn't feel like we're at the\nvery top of a building.");
        Message_MsgSel("So future cities will be like this.", "It's an amazing place.", "I'm already bored of this place...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405051_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Maybe the future will be even more\namazing?\nI look forward to it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405051_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.\nI'm grateful to the person who\nthought to build a place like this.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405051_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really? Let's go home, then...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_D?F", 0, 1, 0);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405051_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I feel like we're closer to the sky\nthan usual...");
        Message_MsgSel("I also want to see the night sky here.", "It's like we're on top of the clouds.", "Can you scientifically explain that?");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 2);
                Date_InData_Date(321, 2);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 2, (#1), 1);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(5, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0405051_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah.\nIt would surely feel different at\nnight time.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405051_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Then let's come here together.\nTo see the starry sky.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay.");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0405051_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... For real?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Why do you ask?");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405051_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Only couples come here at night\ntime.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, they would.\nIt would surely be romantic here.");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405051_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nAm I the only one who feels sad...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405051_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Yeah, just me.\nEven though I told myself to do my\nbest...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...?\n｛Chris＊＊｝ is acting\nstrange.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405051_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It seems like it would feel really\nnice lying down on a cloud.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405051_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh? Umm... I can't. Sorry.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
