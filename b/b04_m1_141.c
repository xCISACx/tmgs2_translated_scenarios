section "b04_m1_141"{
    int var0 = Date_GetDateOption(2, 36);
    Background_Bg_GS2("BG_NE220_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_095_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That play was the best!", "That play was so-so.", "That play was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401141_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "The best? ...\nAre you the kinda person who can get\nemotionally moved very easily?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401141_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah. It really feels that way.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401141_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I didn't think it was that bad to\ncall it disappointing, but I felt\nlike I was at a loss.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401141_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "The acting of the heroine...\nwas kinda awesome.\nI felt like I was being drawn in.");
        Message_MsgSel("You like that kind of person?", "She was really into it!", "But I feel like she botched her lines.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401141_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No, not really.\nAnyway, we weren't talking about\nthat.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401141_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nShe kinda had this frantic feeling\nto her.\nIt made we wanna cheer her on.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401141_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Maybe. Your standards are tough...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401141_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "With actors...\nWhen they're performing, I wonder if\nthey ever lose sight of who they\nreally are.");
        Message_MsgSel("Isn't it all just an act?", "That's part of their job.", "Isn't it all just one part of them?");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401141_A00800", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "That's true... It's fine.\nIt was a hard question for you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0401141_A00900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "All just an act, huh...");
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401141_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Hey.\nIf how I am right now is just an\nact, what would you do?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Eh?");
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0401141_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I wonder what I should do?");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Saeki＊＊｝...\nAre you alright?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(1, 2, (#1));
                Voice_PlayVoice("B0401141_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I'm not.\nIt seems like there's a hole in my\nheart...");
                Character_BlinkStart(1, 3, (#1));
                Voice_PlayVoice("B0401141_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "What am I saying...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(The ｛Saeki＊＊｝ that I\nsee is the real\n｛Saeki＊＊｝, isn't it?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401141_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "That's unclear.\nThey get that way through\npracticing, don't they?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401141_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You occasionally say complex\nthings...\nBut maybe I should think that way.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
