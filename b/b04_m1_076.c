section "b04_m1_076"{
    int var0 = Date_GetDateOption(2, 23);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401076_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... It's cold.\nThere are only dead trees here.");
        Message_MsgSel("The dead trees look so desolate.", "Doing this once in a while is nice.", "It's cold, I can't move.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401076_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I know.\nSo should we take a walk, or should\nwe go home?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401076_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Only sometimes... Okay, it's over!\nLet's go home!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401076_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Good idea!\nLet's evacuate before we really\nwon't be able to move.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401076_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... It's seriously cold.\nWe should be at home during\nwinter...");
        Message_MsgSel("It makes me want to drink hot coffee.", "You're such a wimp, always complaining.", "There may be things we can only find now.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401076_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right. Let's go somewhere indoors!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401076_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "So what? I'm going home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(1, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401076_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'll leave that to you.\nI'll be in charge during summer.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401076_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... My fingers are cold.");
        Message_MsgSel("It's gotten remarkably cold.", "But your heart is warm, right?", "Should I buy you a warm drink?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401076_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Why do you seem so okay with it...?\nYou're strong.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401076_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... It's cold.\nWhat you said just then made my\nheart cold.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401076_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "My heart is fine, so warm up my body\nfirst!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh!?");
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401076_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "N...no! I didn't mean it like that.");
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 4, 1);
                Message_Who(0);
                Message_MsgDisp("主人公", "\"M-Mean it like that\"...");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401076_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "No, well, you see... Huh?\nI've kinda gotten a little warmer...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401076_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Thank you. Wait, I should go too.\nLet's run there!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
