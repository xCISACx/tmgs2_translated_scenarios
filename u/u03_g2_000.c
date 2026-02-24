section "u03_g2_000"{
    if (Parameter_GetCh1Param(11, 64) == 0){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("", #1, "U0311000_K00000");
        Message_Who(11);
        Message_MsgDisp("Onoda", "｛主人公｝.\nIt's actually about this.\nI'm giving this to you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Wow, a cute mascot. But...\nis it alright?");
        Voice_PlayVoice("U0311000_K00100", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Yes.\nIt's a charm for enhancing study\nskills.\nIt's one of a pair.");
        Message_MsgSel("Accept (small) Appurin-chan.", "Do not accept (small) Appurin-chan.");
        switch (Message_TextSelect()){
            case 0:
            Message_Who(0);
            Message_MsgDisp("主人公", "Since it's a pair item, is it okay\nto accept this?\nThank you, ｛Onoda＊＊｝.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(11, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("U0311000_K00200", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "No, don't mention it.\nI'm glad to share the pair with you.");
            SoundEffect_PlayStream(3, "SS_T_00_160_M00");
            Message_Who(0);
            Message_MsgDisp("　　　", "(Accepted (small) Appurin-chan!)");
            SoundEffect_StopStream(3, 40);
            SoundEffect_PlayStream(2, "SS_DSE_191_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel my mind getting sharper...)");
            Voice_PlayVoice("U0311000_K00300", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Well then, I'll see you at school.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nSee you then, ｛Onoda＊＊｝.");
            Parameter_AddPl1Param(16, 5);
            Parameter_AddPl1Param(20, 5);
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "It'd be a waste if it wasn't\ncomplete in a pair...\nIt's meant to be paired.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(11, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("U0311000_K00400", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Is that so?\nI thought you'd accept it if it came\nin a pair.");
            Voice_PlayVoice("U0311000_K00500", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "... I'll leave it as a pair then.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("U0311000_K00600", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Well, see you at school.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nSee you then, ｛Onoda＊＊｝.");
            Parameter_AddCh1Param(11, 60, #3);
            break ;
            }
        }
    else {
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(11, 2, (#1));
        Voice_PlayVoice("", #1, "U0311000_K00700");
        Message_Who(11);
        Message_MsgDisp("Onoda", "｛主人公｝.\nWill you accept this?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?\nIt's a study skill enhancing mascot,\nright?");
        Voice_PlayVoice("U0311000_K00800", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "It's the type you can hang in your\nroom.\nIt's packed with dry herbs to\nheighten memory skills.");
        Voice_PlayVoice("U0311000_K00900", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "It will clear your mind.\nYou can try it on your desk.");
        Message_MsgSel("Accept (large) Appurin-chan.", "Do not accept (large) Appurin-chan.");
        switch (Message_TextSelect()){
            case 0:
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you! I'll treasure it.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(11, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("U0311000_K01000", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Organizing your environment can also\nhelp you study.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, you're right. I'll do my best!");
            Voice_PlayVoice("U0311000_K01100", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Yeah, let's do our best together.");
            SoundEffect_PlayStream(3, "SS_T_00_160_M00");
            Message_Who(0);
            Message_MsgDisp("　　　", "(\"Received (large) Appurin-chan!\")");
            SoundEffect_StopStream(3, 40);
            SoundEffect_PlayStream(2, "SS_DSE_191_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel my mind getting sharper...)");
            Voice_PlayVoice("U0311000_K01200", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Thank you for today.\nBecause of you, my dolls can make a\nwonderful friend.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you also, my friend.\nSee you, ｛Onoda＊＊｝!");
            Parameter_AddPl1Param(16, 10);
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "I feel a little bad.\nI think it had better stay at\n｛Onoda＊＊｝'s home.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(11, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("U0311000_K01300", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "You don't need to worry about it....\nBut, I guess. To each their own.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("U0311000_K01400", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Thank you for today.\nBecause of you, my dolls can make a\nwonderful friend.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you too, my friend.\nLet's also do our best in our\nstudies.");
            Voice_PlayVoice("U0311000_K01500", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Yes, let's do our best together.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!\nSee you, ｛Onoda＊＊｝.");
            Parameter_AddCh1Param(11, 60, #3);
            break ;
            }
        }
    if (Parameter_ChkPlayer(5)){
        System_Call_GS2("K02", "G2", 11);
        }
    Parameter_AddCh1Param(11, 64, 1);
    Parameter_AddCh1Param(11, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
