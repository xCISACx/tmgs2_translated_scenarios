section "b04_m1_146"{
    int var0 = Date_GetDateOption(2, 41);
    Background_Bg_GS2("BG_NE270_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_100_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That talk was the best!", "That talk was so-so.", "That talk was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401146_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "...\nI'll probably never be able to\nunderstand you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401146_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It was average...\nLet's hurry up and go home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 3, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401146_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Why am I even here then...?");
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
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(1, 3, (#1));
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401146_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I can't stand this anymore.\nLet's hurry up and go to a brighter\nplace.");
        Message_MsgSel("Don't leave me behind!", "Then it will be over!", "Huh? I feel kind of paralysed!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401146_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I get it, so hurry.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0401146_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Why are your nerves so strong...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401146_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Oi! Even if it's a joke......\nAre you serious?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401146_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "This Inamura Jouji.\nI wonder if he's been living this\nwhole time, only encountering scary\nstuff...");
        Message_MsgSel("It seems like monsters resent him.", "It's fiction!", "I'm～ a～ mon～ ster～");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 3, (#1), 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401146_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Then I'll resent Inamura Jouji for\nthe rest of my life...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401146_A00900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... You're lying.\nInamura Jouji said that it was real.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401146_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... Really?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah... probably.");
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0401146_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "What do you mean by \"probably\"!?\nIs it real or not!?");
                Message_Who(0);
                Message_MsgDisp("主人公", "U-Umm...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401146_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "As I thought, it's real...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝ really is a\ncoward...\nIf everyone at school knew--)");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401146_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... You can't.\nDon't ever tell anyone.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(He can sense the supernatural!?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401146_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", ".........\nIf you say it 10 more times, I might\nlaugh.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    }
