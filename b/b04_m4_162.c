section "b04_m4_162"{
    int var0 = Date_GetDateOption(2, 46);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404162_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "What's in here anyway?");
        Message_MsgSel("I'm excited!", "Alright, leave it to me!", "Let's get lots of candy.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404162_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Is there something to be excited\nabout?\nOkay, let's go there.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0404162_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hey, don't decide on your own!\nYou're out of control.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404162_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Could we get something from a coin?\nOoh, let's try to.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404162_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Good, let's win this game at once!");
        Message_MsgSel("You really are a gambler.", "It feels exciting.", "It'll be a waste if you bet that much.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404162_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Let's not let go of this chance....\nWow, a win! hahaha!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404162_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Just don't say it.\nI got nervous too....\nArgh, a miss...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404162_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'm saying, it'll be a real waste if\nyou let go of that chance!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404162_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "My first time and I get this many\nmedals.\nCan't grab all of it.");
        Message_MsgSel("Having this much, it was fun overload.", "Let's bet everything on the next game.", "Looks like you can collect the medals.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 2, (#1), 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404162_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Well yeah... but I got bored.\nLet's head home.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404162_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I played plenty but...");
                Message_Who(0);
                Message_MsgDisp("主人公", "What's wrong?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404162_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hmm...\nHonestly speaking, I really don't\nlike to linger here.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Is that so?");
                Character_BlinkStart(4, 0, (#1));
                Voice_PlayVoice("B0404162_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Yeah.\nThe cigarette smoke is thick here,\nisn't it?\nIt goes to my throat.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404162_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "So, let's go elsewhere, okay?\nThere's someplace I want to go.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Let's do that....\nI'm sorry, for being inconsiderate.");
                Voice_PlayVoice("B0404162_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "It's fine....\nThen, we're betting it all, let's go\nout with a bang!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404162_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, with style!\nYou're looking cool!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404162_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Bothersome, but okay.\nUsing its limit like this is faster!\nNext, bet everything!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
