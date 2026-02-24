section "b04_m4_031"{
    int var0 = Date_GetDateOption(2, 4);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        Voice_PlayVoice("B0404031_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "There's a lot of fish that I've\nnever seen.");
        Message_MsgSel("It's as if it were Ryuujin's Palace!", "Ah, they are beautiful fish!", "This is sashimi heaven!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404031_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ryuujin's Palace?\nThat reaction is yours and yours\nalone.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(4, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404031_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You're right, it's really flashy!\nI might use this as inspiration for\nmy costumes at live concerts.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(4, 2, (#1), 1);
            Voice_PlayVoice("B0404031_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "One's sense of art...\nhas nothing to　do with taste.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        Voice_PlayVoice("B0404031_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh, a shark! Those are fine teeth...");
        Message_MsgSel("Amazing! They're so scaly.", "The remora's clinging.", "It's powerful and cool!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0404031_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Indeed.\nNo, that's not it, I don't know\nwhere the conversation left off!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404031_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Woah, it's really clinging tight!\nGuy's got the knack～!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404031_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, I think so, too!\nIt looks so cool!\nLike a professional killer.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        Voice_PlayVoice("B0404031_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Even so, these guys are taking it\neasy...");
        Message_MsgSel("They wouldn't survive on the open seas.", "It must be tough in that cramped space.", "Just looking at it makes me sleepy.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404031_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's a dog-eat-dog world, even the\nocean.\nThat's a given.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404031_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "It's bitter, but true.\nSo are you saying that we should be\ndoing something about it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404031_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "It's harsh, really. But...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404031_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "They may not think so, but they can\nhave fun even in a cramped tank.");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("B0404031_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Someday, so will I...\nA small space is fine with me in the\nbeginning.");
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404031_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I want to go before a large crowd\nwho will listen to my song...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝......)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404031_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hahaha!\nIndeed, it does feel like you're\nhypnotized!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
