section "h16_m8_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        Character_ChFace(0, 0, 10);
        if (Parameter_GetCh1Param(8, 130) < 4){
            Character_Chara_GS2(8, "M8_01F", 0);
            }
        else {
            Character_Chara_GS2(8, "M8_??F", 0);
            }
        if (Parameter_GetCh1Param(8, 130) < 4){
            Voice_PlayVoice("H1608000_H00000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "The Baseball Club did it!\nAs expected, seeing your old school\nwin feels good!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad they won...!)");
            }
        else {
            Voice_PlayVoice("H1608000_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "That was a fine win!\nThose guys are doing well.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes!\nIt's because they did it as if they\nwere practicing...");
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("H1608000_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Isn't supporting their foundation\nalso the manager's job?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Right...\nI will continue working hard!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("H1608000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah, do your best!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad they won...!)");
            }
        }
    else {
        Character_ChFace(0, 0, 9);
        if (Parameter_GetCh1Param(8, 130) < 4){
            Character_Chara_GS2(8, "M8_01F", 0);
            }
        else {
            Character_Chara_GS2(8, "M8_??F", 0);
            }
        if (Parameter_GetCh1Param(8, 130) < 4){
            Voice_PlayVoice("H1608000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "That was close～.\nEven though it's a practice game,\nseeing your old school lose is\ndepressing～...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, I have to try harder...)");
            }
        else {
            Voice_PlayVoice("H1608000_H00500", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "That was bad luck,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...... It's frustrating...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1608000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You should use that bitterness as\nmotivation and make up for the loss\nduring the real games.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H1608000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Winning your entire life is\nimpossible.\nDo your best!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right...\nI shouldn't be down and must try\nharder!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
