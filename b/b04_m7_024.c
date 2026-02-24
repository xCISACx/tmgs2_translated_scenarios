section "b04_m7_024"{
    if (System_GlobalWork(1, 1) == 0){
        Character_Chara_GS2(7, "M7_06F", 0, 1, 0);
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0407024_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "We've been heading away from the\nshore for a while now.\nThe town looks small.");
        Message_MsgSel("My heart relaxes when I see the ocean.", "The sea breeze feels good.", "Didn't the seashore stink?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407024_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes.\nFor you, time to relax is necessary.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
            Character_ChFace(1, 4, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(7, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407024_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes.\nThe wind feels more pleasant than on\nland.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0407024_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Is that so?\nIt resembled the smell of cat food.\nI wasn't worried, though.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (System_GlobalWork(1, 1) == 1){
        Character_Chara_GS2(7, "M7_06F", 0, 1, 0);
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0407024_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I never get tired of watching the\nsplashes on the side of the boat.");
        Message_MsgSel("The bubbles are white and beautiful.", "I feel a little bathed.", "It seems alive somehow.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407024_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "When you say that, it sounds like a\nwashing machine.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(7, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0407024_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I'm covered with water.\nIt seems like it would be better if\nwe went inside.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407024_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "The power of the waves and the force\nof the ship are different in detail.\nIt seems like the splashes are\nliving creatures.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (System_GlobalWork(1, 1) == 2){
        Character_Chara_GS2(7, "M7_06F", 0, 1, 0);
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 7, "B0407024_G00800");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝, you can see\nthe town from the sea.\nIt looks different.");
        Message_MsgSel("It's a small fairyland.", "It looks like a diorama.", "How can you see it, ｛Wakaouji＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407024_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Haha, that seems like you.\nThen you are princess of the\nfairyland.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407024_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes, the cars look small.\nAlmost like toys.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 5);
            Date_InData_Date(321, 1);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0407024_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Is that so...\nLike a pretty artifact...");
            Message_Who(0);
            Message_MsgDisp("主人公", "An artifact?...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("B0407024_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes. I live in that town.\nThe actual feeling doesn't gush\nforth very much.");
            Voice_PlayVoice("B0407024_G01300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "After all, I am not familiar with\nthis place.");
            Message_Who(0);
            Message_MsgDisp("主人公", "That...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0407024_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Hahaha, it's strange, though.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0407024_G01500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "...\nWell, if I don't like it here, I can\ngo other places.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh...?!");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0407024_G01600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Oh, it's nothing.\nAh, we'll reach the harbor soon.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝...\nHe seems to want to go somewhere\nelse suddenly...)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
