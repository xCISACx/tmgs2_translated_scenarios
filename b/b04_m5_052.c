section "b04_m5_052"{
    if (System_GlobalWork(1, 1) == 0){
        Character_Chara_GS2(5, "M5_D?F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405052_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's my first time seeing them from\nso close up.\nFireworks are so nice.");
        Message_MsgSel("The night sky is the fireworks' canvas!", "What are inside of the fireworks?", "It's loud.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405052_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah. That's an amazing expression.\nIt makes me want to paint a picture.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405052_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm also curious.\nLet's research it later.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0405052_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Isn't that what fireworks are also\nabout?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (System_GlobalWork(1, 1) == 1){
        Character_Chara_GS2(5, "M5_D?F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405052_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "There are a lot of varieties in\nJapanese fireworks.");
        Message_MsgSel("Even the hand-held fireworks are pretty.", "Is it different to foreign fireworks?", "They all look the same to me.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405052_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ehh, really?\nI've never held one before.\nLet's do it together next time▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405052_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nI didn't think that there were so\nmany different ones.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405052_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh, they're different...\nThey're completely different.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (System_GlobalWork(1, 1) == 2){
        Character_Chara_GS2(5, "M5_D?F", 0, 1, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405052_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "...\nSeeing such pretty fireworks makes\nme at a loss for words...");
        Message_MsgSel("... Did you eat something bad?", "... Yeah.", "It's a common feeling.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405052_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I didn't...\nHow did our conversation about\nfireworks turn into a conversation\nabout that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405052_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I didn't...");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405052_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah.\nDo you mean that I usually talk too\nmuch?");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, it's not that...\nI feel like you're kind of...\ndifferent from how you are normally.");
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Message_Who(5);
                Message_MsgDisp("Chris", ".........");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0405052_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nWhat would you do if I told you that\nthis is how I really am?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... I wouldn't do a thing.\n｛Chris＊＊｝ is\n｛Chris＊＊｝.");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("", 5, "B0405052_E01400");
                Message_Who(5);
                Message_MsgDisp("Chris", "｛主人公｝...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405052_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "......... This is bad～.");
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405052_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm so happy you said that.\nI want to hug you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hug?");
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405052_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... I can't look into those eyes.\nPlease look over there instead.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝ is acting\nstrange...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405052_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Haha.\nWhen you're emotionally moved, you\ndon't say as much.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405052_E01900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Japanese is hard. So...\nthe fireworks explosion goes *clang\nclang* *bang bang*!\nCan I say that instead?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(5, 0, 1);
    }
