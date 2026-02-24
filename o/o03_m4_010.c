section "o03_m4_010"{
    if (Parameter_GetPl1Param(312) != 4){
        if (Parameter_GetCh1Param(4, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0304010_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hey.\nWhy are you loitering around here?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.\nI was looking for a person to\nparticipate with...");
            Voice_PlayVoice("O0304010_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ehh.\nIt's fine, I don't mind\nparticipating.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really? Then perhaps I'll ask you.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("O0304010_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Feel indebted to me!");
            Message_CloseMsg();
            Character_Chara_GS2(4, "NON");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("", 4, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝.\nHey, do you want to join the\nthree-legged race together?");
            Voice_PlayVoice("O0304010_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "What the-- You don't have a partner?\nAlright, I'll join.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really? Thanks!");
            Message_CloseMsg();
            Character_Chara_GS2(4, "NON");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("", 4, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.");
            Voice_PlayVoice("O0304010_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hey.\nWanna join the three-legged race\ntogether?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, sure!\nI was also looking for a partner.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("O0304010_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Then come to me straight away.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("O0304010_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Nothing! Let's go!");
            Message_CloseMsg();
            Character_Chara_GS2(4, "NON");
            }
        }
    else {
        if (Parameter_GetCh1Param(4, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("", 4, "O0304010_D00700");
            Message_Who(4);
            Message_MsgDisp("Hariya", "｛主人公｝.\nWhat are you doing here?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I was looking for a person who'd run\nwith me in the three-legged race...");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("O0304010_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "What the-- Do you wanna run with me\nthat badly?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 2, 5);
            Voice_PlayVoice("O0304010_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It can't be helped, let's go!");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay!");
            Message_CloseMsg();
            Character_Chara_GS2(4, "NON");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("", 4, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.");
            Voice_PlayVoice("O0304010_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You look free.\nI'll designate you as my partner for\nthe three-legged race.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh!?");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("O0304010_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "This way you can have another thing\nto brag about!\nLet's go!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh... Ah, okay!");
            Message_CloseMsg();
            Character_Chara_GS2(4, "NON");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "I need a partner.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("", 4, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.");
            Voice_PlayVoice("O0304010_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Wanna compete in the three-legged\nrace with me?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("O0304010_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nIf you don't wanna get that close to\nme, I'll look for another partner...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Why?\nI'm not bothered by that, at all.");
            Character_ChFace(0, 4, 0);
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("O0304010_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Really? Let's go.");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh... Wait, ｛Hariya＊＊｝!");
            Voice_PlayVoice("O0304010_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Shut up and hurry!");
            Message_CloseMsg();
            }
        }
    }
