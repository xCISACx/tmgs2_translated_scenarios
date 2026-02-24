section "b04_m1_072"{
    int var0 = Date_GetDateOption(2, 20);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401072_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "The air has gotten gentler here...\nIt has the feeling of spring.");
        Message_MsgSel("Look, there's a butterfly flying!", "It seems like napping here would be nice.", "We must be wary of UV Rays!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401072_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "They would fly, wouldn't they?\nIt's spring.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401072_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, that might be a good idea.\nDo you wanna try sleeping over\nthere?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401072_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Girls are such a bother.\nI pity you sometimes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401072_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "This place seems like it's hard to\nmaintain.");
        Message_MsgSel("I admire people with green thumbs.", "You couldn't do it, ｛Saeki＊＊｝.", "It's a job worth doing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401072_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I get what you mean....\nIt's a surprise hearing it come from\nyou.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401072_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... My bad. I can't do it, though...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401072_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah... probably.\nEven though that kind of job is\ntough, it looks like they work hard.");
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
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401072_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "When I see the lawn...\nit makes me wanna lie down on it.\nIt definitely feels like spring.");
        Message_MsgSel("Should I lend you my lap?", "It's like we can get some sound sleep here.", "But UV rays are our skin's mortal enemy!");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401072_A00900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... I'll decline.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401072_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "T-That's a little, you know.");
                Message_Who(0);
                Message_MsgDisp("主人公", "No good?\nBut there are other people doing it?");
                Voice_PlayVoice("B0401072_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "But they're couples, aren't they?\nIt's embarrassing, no?");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see...\nWell, I guess it's fine if you find\nit unpleasant...");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401072_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "No...\nI wouldn't say that I dislike it...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh!?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401072_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... So, please let me use it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(He's going to use my lap...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401072_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I-I get it already, so calm down...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401072_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nAh, I really am getting sleepy...");
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
