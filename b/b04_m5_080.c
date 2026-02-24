section "b04_m5_080"{
    int var0 = Date_GetDateOption(2, 24);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0405080_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "This place feels good.");
        Message_MsgSel("I'm happy being surrounded by flowers▼", "All these plants make the air so fresh!", "That fruit looks yummy.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405080_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm happy seeing your happy face▼");
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
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405080_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nIt feels like we'll be able to sleep\nreally well here.");
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
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0405080_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, I really feel like eating it.\nBut you can't really eat it, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(5, 2, (#1));
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0405080_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wow～...\nThis thing looks like a cucumber\nmonster.\nWhat is it?");
        Message_MsgSel("It's yummy when boiled.", "An encounter with the s-strange!?", "You don't know what winter melons are?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405080_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh, so you can eat it...\nI'll get my chef to make it next\ntime▼");
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
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405080_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Anne-chan? Who is that?\nIsn't that someone's name?");
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
            Character_BlinkStart(5, 3, (#1), 1);
            Voice_PlayVoice("B0405080_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Are they that popular in Japan?\nI didn't know...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0405080_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "What a pretty flower bed...\nI want to turn the entire thing into\na bouquet and give it to someone as\na present.");
        Message_MsgSel("How romantic.", "It would be a pain for the person getting it.", "The flower bed should be left the way it is.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405080_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Isn't it?\nIf you bathed in a bath full of\nflower petals, it would surely be\npretty▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405080_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Right... I didn't think that far...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405080_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Right... I didn't think that far...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0405080_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Then what about this size...\nWhat about a normal bouquet?\nWould you be happy getting one?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I would.");
                Voice_PlayVoice("B0405080_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Then what flower do you like the\nmost?\nTulips? Or...");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Ah, are you planning something?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405080_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I wonder～.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0405080_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Isn't it common sense to ask a girl\nthat you're interested in about\nthese kinds of things?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(... Is it common sense?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405080_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.... Yeah, I agree as well.\nLet's come and look at this again.");
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
