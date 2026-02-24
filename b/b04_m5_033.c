section "b04_m5_033"{
    int var0 = Date_GetDateOption(2, 6);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        Voice_PlayVoice("B0405033_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Whoa～... Whale sharks are big.");
        Message_MsgSel("They don't feel scary, as they have love.", "It's like we'll get swallowed by them!", "It seems like it was hard to get them here.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405033_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.\nI feel calm by just watching them～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0405033_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hmm, they look obedient, so I don't\nthink they'd do that.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405033_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "But they came here from the sea...\nIt seems like moving them here is\ntiring for both the sharks and the\nAquarium.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        Voice_PlayVoice("B0405033_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The whale sharks remember when\nfeeding time is.\nThey're smart.");
        Message_MsgSel("Even I know when feeding time is!", "I wonder if they know any tricks?", "Without any labor there to help them!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405033_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Are you jealous of them?\nRelax, I won't look at anything but\nyou▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405033_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It seems like they could do it if\nyou taught them tricks, but I want\nthem to be at ease.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405033_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Saying \"labor\" is bad～. Meh.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        Voice_PlayVoice("B0405033_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I'm kinda getting sleepy...");
        Message_MsgSel("Whale sharks swim around so liberally.", "You're getting sleepier...", "You're bored, even though I'm here?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405033_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Doing as they please, without\ngetting caught up in the flow...\nHow nice. I wish I was like them.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405033_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hypnotism!?\nCrap, I can't open my eyes...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405033_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Eh... Why do you think that...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405033_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... You know.");
                Voice_PlayVoice("B0405033_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Being carefree like this with\nsomeone is actually something I\ndon't do often.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405033_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah.\nI don't get sleepy when I have\nnothing to do.\nIt's because I'm relaxed that I get\nsleepy.");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0405033_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Don't you think that's amazing?\nMaybe you have some kind of special\npower.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
