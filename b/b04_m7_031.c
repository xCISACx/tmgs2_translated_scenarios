section "b04_m7_031"{
    int var0 = Date_GetDateOption(2, 4);
    if (var0 == 0){
        Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        Voice_PlayVoice("B0407031_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah!\nWould a crab's leg regenerate if it\nbroke off?\nI do not know this.");
        Message_MsgSel("It will regenerate when it molts.", "It'll continue living on without it.", "What? You don't know?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407031_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes, that's right....\nIf I had known earlier, I would not\nhave felt uneasy about being hungry!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407031_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I know a lot...\nSensei is still a human being.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0407031_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I'm sorry.\nSensei is a chemistry teacher, he\ndoes not know very much of biology.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else {
        Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        Voice_PlayVoice("B0407031_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "This may seem sudden, but I have a\nquestion.\nWhy is the sea creature Starfish,\nnamed that in English?");
        Message_MsgSel("It's a Starfish due to its star-shape!", "Star Damsel...?", "It's dried food made from dried fish.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407031_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Correct!\nFor a moment, I gave you a question\nlike a teacher.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Character_BlinkStart(7, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407031_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Buzz! Wrong answer.\nHowever, because star was in there,\nI'll give you a partial point.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0407031_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Maybe that is a dense joke?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
