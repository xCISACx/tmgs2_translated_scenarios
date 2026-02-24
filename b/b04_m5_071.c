section "b04_m5_071"{
    int var0 = Date_GetDateOption(2, 18);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405071_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "*Phew*... It's hot～.");
        Message_MsgSel("The water surface is shining like a gem!", "I want to shower under the fountain.", "I hate the heat, and days like these...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405071_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, you're right.\nIt'd be a waste if we didn't enjoy\nourselves, since we're already here.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_BlinkStart(5, 0, (#1), 1);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0405071_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'd want to go to a pool instead～...\nI can't catch up with the water\nfountain...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405071_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah... Let's go to a cooler place.");
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
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405071_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Apparently, fountains exert negative\nions.");
        Message_MsgSel("I wonder if it has a soothing effect?", "Just like waterfalls.", "It's boring, because I can't see it.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405071_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It seems like it does, doesn't it?\nBut just being with you soothes me▼");
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
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405071_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nIt seems like waterfalls are much\nmore powerful.");
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
            Voice_PlayVoice("B0405071_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hmm, is that so?\nI felt kind of refreshed, though...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405071_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah, a rainbow.");
        Message_MsgSel("Wow, how pretty!", "Obviously, consider the sun's position.", "You're like a child, ｛Chris＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405071_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, it's really pretty.\nI'm glad I could see it with you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405071_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah... Right...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405071_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Isn't it a waste if you see\nsomething pretty, and don't express\nit honestly, like how a kid does?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405071_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Really? Thanks.");
                Voice_PlayVoice("B0405071_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm fine with being told that I'm\nlike a kid.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Why?");
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405071_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hmm.\nI think that when I was a kid, I\nsometimes said moronic things.");
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405071_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "As soon as I thought of things, even\nunthinkable things, I would\nimmediately do it--");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405071_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But now, even if I think about such\nthings, there are many things that I\ncan't act upon...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405071_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Yes.\nThinking about it, school is a place\nwhere I am allowed to do the things\nI like.");
                Voice_PlayVoice("B0405071_E01800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Let's pretend this didn't happen.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Environment_StopME(1, 40);
    System_Wait(60);
    }
