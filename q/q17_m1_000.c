section "q17_m1_000"{
    if (System_GlobalWork(0, 1) == 1){
        if (System_GlobalWork(23, 1) == 1){
            Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "Hah... Today was fun!\nThe dumplings were delicious, too!");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(1, 3, (#1));
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("FD_01_060_00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I see...");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 4, 1);
            Character_BlinkStart(1, 0, (#1));
            Voice_PlayVoice("FD_01_060_00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "However, I shouldn't say this...\nYou need to make proper memories.\nTry making them with other people,\nokay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay...\nSorry, I made you come with me.");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 4, 1);
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("FD_01_060_00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It was fine for me.\nI was able to make good memories.");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah～! That was fun!");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("Q0801000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, you're used to things like\nthat.\nTo you and I being together.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("Q0801000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Are you free the day after tomorrow?\nDo you want to go visit places\nagain, like today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, of course!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("Q0801000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay.\nThen the day after tomorrow, please\ncontinue to be my guide.");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(1, "M1_01F", 0);
            Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("Q0801000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hah, we're here. Finally....\nWell, to be honest, I had fun.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, me too. Thanks for the invite.");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("Q0801000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey...\nDo you want to do this again the day\nafter tomorrow?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. Let's visit places together.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("Q0801000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay. I look forward to it.");
            }
        }
    else if (System_GlobalWork(0, 1) == 2){
        Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(1, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah～! That was fun!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("Q0801000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, I got to see many places.");
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("Q0801000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "We should take the opportunity to\nvisit places the day after tomorrow.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, of course!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Q0801000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Very well.\nThen we'll meet here, again.");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah～! That was fun!");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("Q0801000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, you're used to things like\nthat.\nTo you and I being together.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("Q0801000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Are you free the day after tomorrow?\nDo you want to go visit places\nagain, like today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, of course!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("Q0801000_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay.\nThen the day after tomorrow, please\ncontinue to be my guide.");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah～! That was fun!");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("Q0801000_A01200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Today felt like a normal holiday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "That's true...");
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("Q0801000_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "So, ehh....\nAre you free the day after tomorrow?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, I'm free, why?");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("Q0801000_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, do you want to visit places\ntogether?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Well then, we'll meet here the day\nafter tomorrow.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("Q0801000_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay. Don't oversleep, okay? ...\nSee ya.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It really feels like a holiday.)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
