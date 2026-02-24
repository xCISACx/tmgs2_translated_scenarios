section "b04_m5_234"{
    int var0 = Date_GetDateOption(2, 71);
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    if (var0 == 0){
        Voice_PlayVoice("B0405234_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Those were some amazing tricks...");
        Message_MsgSel("It was scary, but it's fun being with you!", "I was so scared I shut my eyes...", "It felt like it was just childish tricks!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405234_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Weren't you trembling?\nBut you were cute▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405234_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You should have told me...\nNext time, we'll hold hands▼");
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
            Voice_PlayVoice("B0405234_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "But all the creatures and stuff were\nmade really well?\nDid you actually see them?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0405234_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That thing that looked like a\nnurse...\nWhat was it?");
        Message_MsgSel("That was also a creature.", "Why don't you ask the girl right behind you?", "Look at me instead of her!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405234_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right...\nWhen she was human, she must have\nbeen a cute girl.");
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
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405234_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh!? T-There's no one there...\nDon't scare me...");
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
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405234_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I wanted to...\nBut when she popped up outta\nnowhere, I couldn't help but look at\nher...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0405234_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The voices we heard from behind us\nwere something else.\nThat was what surprised me the most.");
        Message_MsgSel("It ruined the atmosphere.", "I couldn't even scream...", "I didn't hear any voices!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405234_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It made me laugh, it kept saying\n\"Pomade, pomade\".\nHuh, I wonder if it was some kinda\nspell.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405234_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "If you were scared, you should have\nclung on to me.\nYou can do it now, too▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405234_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, so you were scared...\nI'm sorry, I didn't notice...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Voice_PlayVoice("B0405234_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Right.");
                Voice_PlayVoice("B0405234_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You were clinging on to my clothes\nand had your eyes shut, so you\nprobably wouldn't have heard it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 1);
                Message_Who(5);
                Message_MsgDisp("Chris", ".........");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405234_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "......... Wah!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Kyaa!");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0405234_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Haha... Just kidding.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Geez... ｛Chris＊＊｝!");
                Voice_PlayVoice("B0405234_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Yes, right.\nIf I didn't do that, I would have\nseriously wanted to hug you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Voice_PlayVoice("B0405234_E01800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Where do you wanna go now?\nIf we don't hurry, the day will be\nover.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝...\nI wonder what he said...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
